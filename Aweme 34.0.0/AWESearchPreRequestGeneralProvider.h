@interface AWESearchPreRequestGeneralProvider : AWESearchPreRequestBaseProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)prefetchID;
+ (id)preRequestManagerWithObject:;
+ (id)requestIdentifier:;
@end
