@interface SASTButtonItem : AceObject
@property (nonatomic) <SASTTemplateAction> action;
@property (nonatomic) BOOL centered;
@property (nonatomic) SAUIDecoratedText decoratedLabel;
@property (nonatomic) SAUILocalImageResource localImageResource;
@property (nonatomic) NSString position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPosition:;
- (id)position;
- (id)groupIdentifier;
- (id)action;
- (void)setAction:;
- (id)encodedClassName;
- (void)setCentered:;
- (BOOL)centered;
- (id)localImageResource;
- (void)setLocalImageResource:;
- (id)decoratedLabel;
- (void)setDecoratedLabel:;
+ (id)buttonItem;
+ (id)buttonItemWithDictionary:context:;
@end
