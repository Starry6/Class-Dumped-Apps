@interface NSGZipDecoder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fileAttributes;
- (id)init;
- (void)dealloc;
- (id)filenameWithOriginalFilename:;
- (id)decodeData:;
- (BOOL)decodeDownloadData:dataForkData:resourceForkData:;
- (BOOL)isFinishedDecoding;
- (BOOL)finishDownloadDecoding;
@end
