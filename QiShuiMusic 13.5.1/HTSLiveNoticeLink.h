@interface HTSLiveNoticeLink : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSString mark;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) q taskClassId;
@property (nonatomic) BOOL important;
@property (nonatomic) NSString activityName;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString prizeId;
+ (id)descriptor;
@end
