@interface CSJResponseModel : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) q returnValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)returnValue;
- (id)initWithDictionary:error:;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
- (void)setReturnValue:;
@end
