@interface SAUITemplateBaseItem : SABaseAceObject
@property (nonatomic) NSArray communicationOptions;
@property (nonatomic) SAUITemplateEdgeInsets fullScreenPaddingDelta;
@property (nonatomic) BOOL hasPriorityLayout;
@property (nonatomic) SAUITemplateEdgeInsets padding;
@property (nonatomic) NSArray presentationOptions;
@property (nonatomic) BOOL shouldBeOffscreenInPartial;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setPadding:;
- (id)encodedClassName;
- (void)setPresentationOptions:;
- (id)presentationOptions;
- (id)padding;
- (id)communicationOptions;
- (void)setCommunicationOptions:;
- (id)fullScreenPaddingDelta;
- (void)setFullScreenPaddingDelta:;
- (BOOL)hasPriorityLayout;
- (void)setHasPriorityLayout:;
- (BOOL)shouldBeOffscreenInPartial;
- (void)setShouldBeOffscreenInPartial:;
+ (id)baseItem;
+ (id)baseItemWithDictionary:context:;
@end
