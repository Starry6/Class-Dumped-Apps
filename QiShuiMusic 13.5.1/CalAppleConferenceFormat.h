@interface CalAppleConferenceFormat : NSObject
- (id)serializeConference:serializationBlockTitle:;
- (id)deserializeConferences:;
- (BOOL)supportsSerializingConferenceWithSource:;
+ (id)calBundle;
+ (id)calConferenceSerializationHandle;
+ (void)_parseURL:state:;
+ (void)_parseBlockTitle:state:;
+ (void)_parseConferenceTitle:state:;
+ (void)_parseJoinMethodTitleAndFeatures:state:;
+ (id)_buildDeserializationResultFromState:;
+ (BOOL)_line:matchesRegex:outFoundRange:;
+ (id)_joinMethodTitleAndFeaturesRegex;
+ (id)_conferenceTitleRegex;
+ (id)_startDelimiterRegex;
+ (id)_detailsDelimiterRegex;
@end
