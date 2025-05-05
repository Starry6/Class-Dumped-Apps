@interface MBSystemContainer : MBContainer
- (id)domain;
+ (id)systemContainerWithDomainName:containerDir:isShared:;
+ (id)systemContainerWithPropertyList:;
@end
