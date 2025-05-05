@interface HTSLiveGroupPhotoJumpDetail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage groupPhoto;
@property (nonatomic) BOOL hasGroupPhoto;
@property (nonatomic) NSMutableArray locationListArray;
@property (nonatomic) Q locationListArray_Count;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSString shareContent;
+ (id)descriptor;
@end
