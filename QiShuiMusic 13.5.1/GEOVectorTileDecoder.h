@interface GEOVectorTileDecoder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canDecodeTile:quickly:;
- (id)decodeTile:forKey:;
@end
