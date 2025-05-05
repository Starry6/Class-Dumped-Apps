@interface QLListCellManager : NSObject
@property (nonatomic) NSMutableDictionary operations;
@property (nonatomic) NSOperationQueue generationQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operations;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setOperations:;
- (id)generationQueue;
- (void)_operationDidFinish:;
- (void)setGenerationQueue:;
- (void)operation:didDetermineFileSize:fileTypeString:;
- (void)operation:didGenerateThumbnail:;
- (void)setupCell:withItem:atIndex:;
@end
