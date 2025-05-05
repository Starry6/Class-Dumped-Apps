@interface CKKSExternalTLKShare : NSObject
@property (nonatomic) NSString view;
@property (nonatomic) NSString tlkUUID;
@property (nonatomic) NSData receiverPeerID;
@property (nonatomic) NSData senderPeerID;
@property (nonatomic) NSData wrappedTLK;
@property (nonatomic) NSData signature;
- (id)signature;
- (id)initWithCoder:;
- (id)view;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)description;
- (id)initWithView:tlkUUID:receiverPeerID:senderPeerID:wrappedTLK:signature:;
- (id)stringifyPeerID:;
- (id)tlkUUID;
- (id)receiverPeerID;
- (id)senderPeerID;
- (id)wrappedTLK;
+ (BOOL)supportsSecureCoding;
+ (id)parseFromJSONDict:error:;
+ (id)unstringifyPeerID:;
@end
