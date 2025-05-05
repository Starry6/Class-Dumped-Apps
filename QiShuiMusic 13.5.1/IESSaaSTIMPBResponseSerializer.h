@interface IESSaaSTIMPBResponseSerializer : NSObject
+ (id)responseObjectForError:statusCode:headers:data:resultError:;
@end
