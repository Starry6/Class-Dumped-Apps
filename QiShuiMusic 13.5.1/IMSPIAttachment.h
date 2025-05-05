@interface IMSPIAttachment : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) NSURL fileUrl;
@property (nonatomic) q fileTransferState;
@property (nonatomic) NSString uti;
@property (nonatomic) BOOL isSticker;
@property (nonatomic) BOOL isOutgoing;
@property (nonatomic) NSDictionary attributionInfo;
@property (nonatomic) NSDate creationDate;
- (id)uti;
- (void).cxx_destruct;
- (void)setGuid:;
- (id)guid;
- (id)description;
- (id)bundleID;
- (id)creationDate;
- (BOOL)isOutgoing;
- (void)setUti:;
- (BOOL)isSticker;
- (void)setIsSticker:;
- (id)attributionInfo;
- (void)setAttributionInfo:;
- (id)initWithGuid:fileUrl:transferState:uti:isSticker:isOutgoing:attributionInfo:creationDate:;
- (id)fileUrl;
- (void)setFileUrl:;
- (long long)fileTransferState;
- (void)setFileTransferState:;
- (void)setIsOutgoing:;
@end
