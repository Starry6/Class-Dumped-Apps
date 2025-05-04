@interface AWEStudioDraftDegradeManager : NSObject
+ (void)tryDegradeRecover:completion:;
+ (void)tryNextStrategy:strategies:publishModel:completion:;
+ (id)strategies;
@end
