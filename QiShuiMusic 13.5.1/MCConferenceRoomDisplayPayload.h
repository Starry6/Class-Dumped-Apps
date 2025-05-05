@interface MCConferenceRoomDisplayPayload : MCPayload
@property (nonatomic) NSString customMessage;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)customMessage;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
