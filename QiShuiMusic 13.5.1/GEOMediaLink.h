@interface GEOMediaLink : NSObject
@property (nonatomic) NSString adamID;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic) NSInteger mediaSubType;
@property (nonatomic) NSArray thirdPartyLinks;
@property (nonatomic) q relatedCollectionItemIndex;
@property (nonatomic) Q position;
- (int)mediaType;
- (unsigned long long)position;
- (int)mediaSubType;
- (void).cxx_destruct;
- (id)adamID;
- (id)initWithAdamID:mediaType:mediaSubType:thirdPartyLinks:relatedCollectionItemIndex:position:;
- (id)thirdPartyLinks;
- (long long)relatedCollectionItemIndex;
+ (id)mediaLinkFromProto:;
@end
