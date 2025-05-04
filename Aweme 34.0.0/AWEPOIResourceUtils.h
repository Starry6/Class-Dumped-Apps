@interface AWEPOIResourceUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)smallPOIIconWithType:;
+ (id)commentListEntryIconNameForPOIType:;
+ (id)chatPOIIcon;
+ (id)bigPOIIconWithType:;
+ (id)mapAnnotationIconWithType:;
@end
