@interface MCRemovalPasswordPayload : MCPayload
@property (nonatomic) NSString removalPasscode;
- (void).cxx_destruct;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)removalPasscode;
- (void)setRemovalPasscode:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
