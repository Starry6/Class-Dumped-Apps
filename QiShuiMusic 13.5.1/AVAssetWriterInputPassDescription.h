@interface AVAssetWriterInputPassDescription : NSObject
@property (nonatomic) NSArray sourceTimeRanges;
- (id)init;
- (void)dealloc;
- (id)sourceTimeRanges;
- (id)description;
- (id)initWithTimeRanges:;
@end
