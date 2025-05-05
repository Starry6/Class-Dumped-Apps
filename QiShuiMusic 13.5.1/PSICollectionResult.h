@interface PSICollectionResult : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) PSIDate startDate;
@property (nonatomic) PSIDate endDate;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q type;
@property (nonatomic) NSDate sortDate;
@property (nonatomic) Q assetsCountPrivate;
@property (nonatomic) Q assetsCountShared;
@property (nonatomic) NSString keyAssetUUIDPrivate;
@property (nonatomic) NSString keyAssetUUIDShared;
- (id)startDate;
- (unsigned long long)assetsCountPrivate;
- (unsigned long long)assetsCountShared;
- (id)uuid;
- (id)sortDate;
- (id)endDate;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (id)copyWithZone:;
- (id)initWithUUID:startDate:endDate:title:subtitle:keyAssetUUIDPrivate:keyAssetUUIDShared:type:assetsCountPrivate:assetsCountShared:sortDate:;
- (id)keyAssetUUIDPrivate;
- (id)keyAssetUUIDShared;
@end
