@interface IESArtistStcikerCommonRequestModel : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) Q cursor;
@property (nonatomic) Q pageCount;
@property (nonatomic) BOOL shouldCache;
- (unsigned long long)cursor;
- (BOOL)shouldCache;
- (id)host;
- (unsigned long long)pageCount;
- (void)setHost:;
- (void)setCursor:;
- (void)setShouldCache:;
- (void).cxx_destruct;
- (void)setPageCount:;
@end
