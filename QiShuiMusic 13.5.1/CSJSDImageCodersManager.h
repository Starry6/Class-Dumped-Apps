@interface CSJSDImageCodersManager : NSObject
@property (nonatomic) NSMutableArray imageCoders;
@property (nonatomic) NSArray coders;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setImageCoders:;
- (void)addCoder:;
- (BOOL)canDecodeFromData:;
- (BOOL)canEncodeToFormat:;
- (id)coders;
- (id)decodedImageWithData:options:;
- (id)encodedDataWithFrames:loopCount:format:options:;
- (id)encodedDataWithImage:format:options:;
- (id)imageCoders;
- (void)removeCoder:;
- (void)setCoders:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
