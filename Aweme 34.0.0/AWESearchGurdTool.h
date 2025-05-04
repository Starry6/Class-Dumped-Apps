@interface AWESearchGurdTool : NSObject
+ (void)fetchResource:channel:completion:;
+ (void)asyncGetDataForResource:channel:completion:;
+ (void)fetchResource:completion:;
+ (void)fetchResourceByBundle:channel:completion:;
@end
