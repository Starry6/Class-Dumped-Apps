@interface SSPlayInfoResponse : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSData playInfoData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)error;
- (id)description;
- (id)copyWithZone:;
- (id)playInfoData;
- (id)initWithPlayInfoData:error:;
@end
