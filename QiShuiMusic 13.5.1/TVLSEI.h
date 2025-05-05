@interface TVLSEI : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDictionary formattedData;
@property (nonatomic) NSDictionary appData;
@property (nonatomic) NSString source;
@property (nonatomic) q DTS;
@property (nonatomic) q PTS;
@property (nonatomic) q index;
@property (nonatomic) BOOL indexAvailable;
@property (nonatomic) BOOL isReliable;
- (long long)DTS;
- (long long)PTS;
- (id)initWithData:DTS:PTS:;
- (BOOL)isIndexAvailable;
- (void)updateAppDataWithData:;
- (id)data;
- (long long)index;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (void)setData:;
- (id)formattedData;
- (id)appData;
- (BOOL)isReliable;
+ (id)SEIWithData:DTS:PTS:error:;
@end
