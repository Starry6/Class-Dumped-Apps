@interface IMAttachment : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) NSString path;
@property (nonatomic) BOOL isSticker;
@property (nonatomic) BOOL isTransferComplete;
@property (nonatomic) NSDate createdDate;
- (id)path;
- (id)createdDate;
- (void)setCreatedDate:;
- (void)setPath:;
- (void).cxx_destruct;
- (void)setGuid:;
- (id)guid;
- (id)description;
- (BOOL)isTransferComplete;
- (BOOL)isSticker;
- (void)setIsSticker:;
- (id)initWithPath:guid:;
- (id)initWithPath:guid:createdDate:isSticker:isTransferComplete:;
- (id)fileTransfer;
- (void)setIsTransferComplete:;
@end
