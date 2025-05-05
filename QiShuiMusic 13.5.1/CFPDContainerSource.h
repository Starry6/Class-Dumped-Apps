@interface CFPDContainerSource : CFPDSource
- (void)dealloc;
- (id)container;
- (id)initWithDomain:userName:container:byHost:managed:shmemIndex:daemon:;
@end
