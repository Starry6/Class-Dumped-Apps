@interface CalGoogleConferenceFormat : NSObject
- (id)serializeConference:serializationBlockTitle:;
- (id)deserializeConferences:;
- (BOOL)supportsSerializingConferenceWithSource:;
+ (id)calConferenceSerializationHandle;
+ (id)_delimiterRegex;
@end
