@interface LPiTunesMediaLookupItemArtwork : NSObject
@property (nonatomic) q height;
@property (nonatomic) q width;
- (id)colors;
- (id)initWithDictionary:;
- (long long)height;
- (long long)width;
- (void).cxx_destruct;
- (id)URLWithHeight:width:cropStyle:format:;
+ (id)colorForColorKind:inColorDictionary:;
@end
