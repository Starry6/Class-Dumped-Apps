@interface HTSLiveShortTouchBigCard : IESLivePBBaseMessage
@property (nonatomic) NSString bigCardURL;
@property (nonatomic) NSInteger containerType;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger duration;
+ (id)descriptor;
@end
