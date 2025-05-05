@interface LynxFontSrcItem : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString src;
@property (nonatomic) NSString dataFontName;
@property (nonatomic) NSPointerArray notifierArray;
- (id)dataFontName;
- (id)notifierArray;
- (void)setDataFontName:;
- (void)setNotifierArray:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)src;
- (void)setSrc:;
@end
