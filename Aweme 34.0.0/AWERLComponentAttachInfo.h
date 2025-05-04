@interface AWERLComponentAttachInfo : NSObject
@property (nonatomic) NSObject<AWERLComponentProtocol> superComponent;
@property (nonatomic) NSMutableArray subComponents;
@property (nonatomic) <AWERLComponentDelegate> delegate;
- (id)superComponent;
- (void)setSuperComponent:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setSubComponents:;
- (id)subComponents;
@end
