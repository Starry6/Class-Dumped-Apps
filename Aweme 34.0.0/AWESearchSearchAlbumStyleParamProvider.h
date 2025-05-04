@interface AWESearchSearchAlbumStyleParamProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (long long)syncGetSearchAlbumStyle;
+ (id)dependKeys;
+ (id)getParamsWithContext:dependKeys:;
+ (id)provideKeys;
@end
