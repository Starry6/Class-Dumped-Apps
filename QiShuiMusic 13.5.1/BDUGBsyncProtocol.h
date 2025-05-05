@interface BDUGBsyncProtocol : GPBMessage
@property (nonatomic) BDUGBsyncHeader header;
@property (nonatomic) BOOL hasHeader;
@property (nonatomic) NSMutableArray topicsArray;
@property (nonatomic) Q topicsArray_Count;
- (id)header;
- (id)topicsArray;
- (void)setTopicsArray:;
- (void)setHeader:;
+ (id)descriptor;
@end
