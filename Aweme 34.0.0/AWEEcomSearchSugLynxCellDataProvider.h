@interface AWEEcomSearchSugLynxCellDataProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)itemConfigWithSugType:;
+ (id)schemaWithSugType:;
+ (id)itemHeightWithSugType:;
+ (id)settingsDict;
+ (unsigned long long)serviceType;
@end
