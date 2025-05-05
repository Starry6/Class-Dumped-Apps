@interface HTSLiveSearchLoadMoreData_SearchData : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString title;
@property (nonatomic) q episodeId;
@property (nonatomic) NSString schema;
@property (nonatomic) q seq;
+ (id)descriptor;
@end
