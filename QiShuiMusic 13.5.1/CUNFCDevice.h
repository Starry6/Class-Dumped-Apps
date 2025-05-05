@interface CUNFCDevice : NSObject
@property (nonatomic) NFTag tag;
@property (nonatomic) NSURL advertisedURI;
@property (nonatomic) NSUUID identifier;
- (id)tag;
- (id)identifier;
- (void)setTag:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)advertisedURI;
- (void)setAdvertisedURI:;
@end
