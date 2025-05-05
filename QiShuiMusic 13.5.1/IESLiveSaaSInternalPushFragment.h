@interface IESLiveSaaSInternalPushFragment : IESLiveRoomComponent
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)didSetAttachingDIContext;
- (id)initWithComponentContext:;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
