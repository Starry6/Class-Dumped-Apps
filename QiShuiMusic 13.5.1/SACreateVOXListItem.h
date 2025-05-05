@interface SACreateVOXListItem : AceObject
@property (nonatomic) NSArray displayHints;
@property (nonatomic) NSString speakableInSequence;
@property (nonatomic) NSString speakableStandalone;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)displayHints;
- (void)setDisplayHints:;
- (id)speakableInSequence;
- (void)setSpeakableInSequence:;
- (id)speakableStandalone;
- (void)setSpeakableStandalone:;
+ (id)createVOXListItem;
+ (id)createVOXListItemWithDictionary:context:;
@end
