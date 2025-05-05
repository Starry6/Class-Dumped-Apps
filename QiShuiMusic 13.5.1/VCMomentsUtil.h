@interface VCMomentsUtil : NSObject
+ (id)createResizeFrame:transferSession:bufferPool:;
+ (id)allocTransferSession;
+ (int)setupBufferPool:width:height:name:;
+ (BOOL)pixelBufferPool:matchesWidth:height:;
@end
