@interface SAUIAddContentToView : SABaseClientBoundCommand
@property (nonatomic) NSString status;
@property (nonatomic) NSString targetViewId;
- (void)setStatus:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)status;
- (id)targetViewId;
- (void)setTargetViewId:;
+ (id)addContentToView;
+ (id)addContentToViewWithDictionary:context:;
@end
