@interface AWEHPCombineResponse : NSObject
@property (nonatomic) <AWEHPNetCombineRequestProtocol> request;
@property (nonatomic) NSString requestUserID;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSString serverLogID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serverLogID;
- (void)setServerLogID:;
- (id)requestUserID;
- (void)setRequestUserID:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setRequest:;
- (id)request;
@end
