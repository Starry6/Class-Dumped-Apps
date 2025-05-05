@interface SACFPEXItem : AceObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString itemSource;
@property (nonatomic) NSNumber score;
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)score;
- (id)sourceIdentifier;
- (id)identifier;
- (id)encodedClassName;
- (void)setScore:;
- (void)setIdentifier:;
- (void)setSourceIdentifier:;
- (id)itemSource;
- (void)setItemSource:;
+ (id)item;
+ (id)itemWithDictionary:context:;
@end
