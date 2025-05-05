@interface CATIDSServiceConnectionMetadata : NSObject
@property (nonatomic) NSUUID connectionIdentifier;
@property (nonatomic) NSString destinationAppleID;
@property (nonatomic) NSDictionary userInfo;
- (id)userInfo;
- (unsigned long long)hash;
- (id)connectionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToMetadata:;
- (BOOL)isEqual:;
- (id)initWithConnectionIdentifier:destinationAppleID:userInfo:;
- (id)destinationAppleID;
@end
