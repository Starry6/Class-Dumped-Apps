@interface SALCMShowModalView : SABaseClientBoundCommand
@property (nonatomic) SAAceView view;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)view;
- (id)encodedClassName;
- (void)setView:;
+ (id)showModalView;
+ (id)showModalViewWithDictionary:context:;
@end
