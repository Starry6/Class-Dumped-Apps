@interface AWERTVFeedCastTypeItemModel : NSObject
@property (nonatomic) q castType;
@property (nonatomic) NSString iconName;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL casting;
- (BOOL)isCasting;
- (id)initWithType:iconName:title:casting:;
- (long long)castType;
- (id)iconName;
- (void).cxx_destruct;
- (id)title;
@end
