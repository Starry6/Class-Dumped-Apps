@interface CalConferencePersistence : NSObject
+ (id)_knownPersistenceFormats;
+ (id)serializeConference:serializationBlockTitle:;
+ (id)deserializeConference:;
+ (id)_htmlSerializedConference:serializationBlockTitle:;
+ (id)updateHTML:withEventNotes:;
@end
