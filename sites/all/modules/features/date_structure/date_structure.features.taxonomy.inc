<?php
/**
 * @file
 * date_structure.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function date_structure_taxonomy_default_vocabularies() {
  return array(
    'event_calendar_status' => array(
      'name' => 'Event Types',
      'machine_name' => 'event_calendar_status',
      'description' => 'Description',
      'hierarchy' => 0,
      'module' => 'event_calendar',
      'weight' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
