@interface AMSDeviceUpdateHandlerInfo : NSObject
@property (nonatomic) AMSDeviceMessengerFilter filter;
@property (nonatomic) @? block;
- (id)block;
- (id)filter;
- (void)setFilter:;
- (void).cxx_destruct;
- (void)setBlock:;
@end
