@interface AWEOFGRouter : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)transferWithInstance:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)transferToURLString:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)transferToURLStringWithOfgClientKey:ofgAppID:ofgError:format:;
+ (id)viewControllerForURLString:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)canOpenURLString:ofgClientKey:ofgAppID:ofgError:;
@end
