@interface AWESocialRelationRequest : NSObject
@property (nonatomic) BOOL isReadingAny;
@property (nonatomic) NSString scene;
- (void)setIsReadingAny:;
- (BOOL)isReadingAny;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)initWithScene:;
+ (id)requestForScene:;
@end
