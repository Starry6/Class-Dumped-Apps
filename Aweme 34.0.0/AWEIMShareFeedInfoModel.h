@interface AWEIMShareFeedInfoModel : NSObject
@property (nonatomic) NSString fromUserID;
@property (nonatomic) NSString secFromUID;
@property (nonatomic) NSString itemID;
@property (nonatomic) BOOL hasRead;
@property (nonatomic) BOOL hasReplied;
@property (nonatomic) double timeStamp;
@property (nonatomic) q errorCode;
- (void)setHasRead:;
- (void)setFromUserID:;
- (id)fromUserID;
- (id)getContentDict;
- (id)secFromUID;
- (void)setSecFromUID:;
- (id)itemID;
- (void)setItemID:;
- (void)setErrorCode:;
- (long long)errorCode;
- (void).cxx_destruct;
- (double)timeStamp;
- (id)initWithDictionary:;
- (void)setTimeStamp:;
- (BOOL)hasReplied;
- (void)setHasReplied:;
- (BOOL)hasRead;
@end
