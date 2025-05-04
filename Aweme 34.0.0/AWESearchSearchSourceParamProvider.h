@interface AWESearchSearchSourceParamProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)dependKeys;
+ (id)getParamsWithContext:dependKeys:;
+ (id)provideKeys;
+ (BOOL)enableFixParamSearchSource;
+ (BOOL)enableFixParamCity;
+ (id)changeSearchSourceIfNeed:params:;
+ (BOOL)enablePreserveExtraParam;
@end
