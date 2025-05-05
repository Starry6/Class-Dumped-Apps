@interface SACFMNumericallyInflectedEmojiName : AceObject
@property (nonatomic) NSString withEmoji;
@property (nonatomic) NSString withoutEmoji;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)withEmoji;
- (void)setWithEmoji:;
- (id)withoutEmoji;
- (void)setWithoutEmoji:;
+ (id)numericallyInflectedEmojiName;
+ (id)numericallyInflectedEmojiNameWithDictionary:context:;
@end
