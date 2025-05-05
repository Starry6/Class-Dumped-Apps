@interface MFDAStoreDraftConsumer : NSObject
@property (nonatomic) NSString serverId;
@property (nonatomic) MFError error;
@property (nonatomic) BOOL success;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleResponse:error:;
- (id)error;
- (BOOL)success;
- (void).cxx_destruct;
- (id)serverId;
@end
