@interface CNUIRenderedLikenessCacheEntry : NSObject
@property (nonatomic) <CNCancelable> token;
@property (nonatomic) CNObservable imageObservable;
@property (nonatomic) NSArray contacts;
@property (nonatomic) CNUILikenessRenderingScope scope;
- (id)token;
- (id)scope;
- (id)contacts;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObservable:token:contacts:scope:;
- (id)imageObservable;
+ (id)entryWithObservable:token:contacts:scope:;
@end
